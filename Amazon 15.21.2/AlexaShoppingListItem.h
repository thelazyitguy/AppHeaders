//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMIHamburgerMenuTextItem.h"

@protocol AMIAppNavigationService;

@interface AlexaShoppingListItem : AMIHamburgerMenuTextItem
{
    id <AMIAppNavigationService> _appNavigationService;
}

@property(retain) id <AMIAppNavigationService> appNavigationService; // @synthesize appNavigationService=_appNavigationService;
- (void).cxx_destruct;
- (void)handleTap;
- (int)weight;
- (id)title;
- (id)itemId;
- (id)initWithNavigationService:(id)arg1;

@end
