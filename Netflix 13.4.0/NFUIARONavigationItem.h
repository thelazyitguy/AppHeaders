//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationItem.h>

@class NFUIAROCategoriesHeaderView, UIViewController;
@protocol NFUIAROCategoriesHeaderViewDelegate;

@interface NFUIARONavigationItem : UINavigationItem
{
    NFUIAROCategoriesHeaderView *_menu;
    UIViewController<NFUIAROCategoriesHeaderViewDelegate> *_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController<NFUIAROCategoriesHeaderViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NFUIAROCategoriesHeaderView *menu; // @synthesize menu=_menu;
- (void)setupMenu;
- (_Bool)needsSetup;
- (id)init;

@end

