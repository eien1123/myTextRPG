#include "Shop.h"
#include "Item.h"
#include "Player.h"

void Shop::PrintShopList()
{
	for (int i = 0; i < this->sellList.size(); i++)
	{
		this->sellList[i]->PrintItem(i);
	}

	return;
}

void Shop::BuyItem(Player* player, int _sel)
{
	// 해당 아이템을 구매하기에 충분한 돈이 있으면
	if (player->GetMoney() >= this->sellList[_sel]->GetItemPrice())
	{
		player->SetMoney(player->GetMoney() - this->sellList[_sel]->GetItemPrice());

		this->sellList[_sel]->SetItemNum(this->sellList[_sel]->GetItemNum() - 1);

		player->AddItem(this->sellList[_sel]->GetItemName());
		
		std::cout << "[ " << this->sellList[_sel]->GetItemName() << "을 구매하였습니다. ]" << std::endl;
		std::cout << "[ 잔액: " << player->GetMoney() << " ]" << std::endl;
	}

	else
	{
		std::cout << "[ 잔액이 부족합니다. ]" << std::endl;
	}

	return;
}

std::vector<Item*> Shop::GetSellList()
{
	return this->sellList;
}