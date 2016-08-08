//
//  UIViewController+DismissKeyboard.m
//  ChatDemo
//
//  Created by wolf on 16/08/08.
//  Copyright (c) 2014年 wolfVip. All rights reserved.
//

#import "UIViewController+DismissKeyboard.h"

@implementation UIViewController (DismissKeyboard)

- (void)setupForDismissKeyboard
{
    UITapGestureRecognizer *singleTap =[[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(tapAnywhereToDismissKeyboard:)];
    
    NSOperationQueue *mainQuene =[NSOperationQueue mainQueue];
    
    [[NSNotificationCenter defaultCenter] addObserverForName:UIKeyboardWillShowNotification object:nil queue:mainQuene usingBlock:^(NSNotification *note){
        [self.view addGestureRecognizer:singleTap];
    }];
    
    [[NSNotificationCenter defaultCenter] addObserverForName:UIKeyboardWillHideNotification object:nil queue:mainQuene
                                                  usingBlock:^(NSNotification *note){
                                                      [self.view removeGestureRecognizer:singleTap];
                                                  }];
}

- (void)tapAnywhereToDismissKeyboard:(UIGestureRecognizer *)sender
{
    [self.view endEditing:YES];
}

@end
