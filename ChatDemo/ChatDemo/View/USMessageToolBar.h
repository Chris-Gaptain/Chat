//
//  USMessageToolBar.h
//  ChatDemo
//
//  Created by wolf on 16/08/08.
//  Copyright (c) 2014年 wolfVip. All rights reserved.
//

#define kInputTextViewMinHeight 36
#define kInputTextViewMaxHeight 200
#define kHorizontalPadding 8
#define kVerticalPadding 5

#import <UIKit/UIKit.h>
#import "USMessageTextView.h"

@protocol USMessageToolBarDelegate <NSObject>

@optional


/**
 *  文字输入框开始编辑
 *
 *  @param inputTextView 输入框对象
 */
- (void)inputTextViewDidBeginEditing:(USMessageTextView *)messageInputTextView;

/**
 *  文字输入框将要开始编辑
 *
 *  @param inputTextView 输入框对象
 */
- (void)inputTextViewWillBeginEditing:(USMessageTextView *)messageInputTextView;

/**
 *  发送文字消息，可能包含系统自带表情
 *
 *  @param text 文字消息
 */
-(void)didSendText:(NSString *)text;

@required
/**
 *  高度变到toHeight
 */
-(void)didChangeFrameToHeight:(CGFloat)toHeight;
@end


@interface USMessageToolBar : UIView

@property (nonatomic, assign)id <USMessageToolBarDelegate>delegate;

/**
 * 操作栏背景图片
 */
@property (nonatomic, strong)UIImage *toolbarBackgroundImage;

/**
 * 背景图片
 */
@property (nonatomic, strong)UIImage *backgroundImage;

/**
 *  用于输入文本消息的输入框
 */
@property (nonatomic, strong)USMessageTextView *inputTextView;

/**
 *  文字输入区域最大高度，必须 > KInputTextViewMinHeight(最小高度)并且 < KInputTextViewMaxHeight，否则设置无效
 */
@property (nonatomic)CGFloat maxTextInputViewHeight;

/**
 *   初始化位置和大小
 */
-(instancetype)initWithFrame:(CGRect)frame;

/**
 *   默认高度
 */
+(CGFloat)defaultHeight;

@end
