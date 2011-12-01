//
//  QuadCurveMenu.h
//  AwesomeMenu
//
//  Created by Levey on 11/30/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "QuadCurveMenuItem.h"

@protocol QuadCurveMenuDelegate;

@interface QuadCurveMenu : UIView <QuadCurveMenuItemDelegate>
{
    int _flag;
    NSTimer *_timer;
    NSArray *_menusArray;
    QuadCurveMenuItem *_addButton;
    id<QuadCurveMenuDelegate> _delegate;
}

@property (nonatomic, copy) NSArray *menusArray;
@property (nonatomic, getter = isExpanding) BOOL expanding;
@property (nonatomic, assign) id<QuadCurveMenuDelegate> delegate;

- (id)initWithFrame:(CGRect)frame menus:(NSArray *)aMenusArray;

@end

///////////////////////////////////////////////////////////

@protocol QuadCurveMenuDelegate <NSObject>

- (void)quadCurveMenu:(QuadCurveMenu *)menu didSelectAtIndex:(NSInteger)index;

@end