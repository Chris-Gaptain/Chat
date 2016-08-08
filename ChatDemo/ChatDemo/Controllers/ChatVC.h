//
//  ChatVC.h
//  ChatDemo
//
//  Created by wolf on 16/08/08.
//  Copyright (c) 2014年 wolfVip. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ChatMessageCell.h"
#import "ChatMessageF.h"
#import "ChatMessage.h"

#import "USMessageToolBar.h"
#import "USMessageTextView.h"

#import "UIViewController+DismissKeyboard.h"

@interface ChatVC : UIViewController<UITableViewDataSource,UITableViewDelegate,USMessageToolBarDelegate>

@property (nonatomic, strong)USMessageToolBar *chatToolBar;

@property (nonatomic, strong)UITableView *tableView;
@end
