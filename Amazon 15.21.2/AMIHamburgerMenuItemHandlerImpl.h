//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMIHamburgerMenuItemHandler-Protocol.h"

@class AMIHamburgerMenuItem, AMIHamburgerMenuModel, NSString;

@interface AMIHamburgerMenuItemHandlerImpl : NSObject <AMIHamburgerMenuItemHandler>
{
    _Bool _valid;
    AMIHamburgerMenuModel *_serviceModel;
    AMIHamburgerMenuItem *_menuItem;
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) AMIHamburgerMenuItem *menuItem; // @synthesize menuItem=_menuItem;
@property(readonly, nonatomic) __weak AMIHamburgerMenuModel *serviceModel; // @synthesize serviceModel=_serviceModel;
- (void).cxx_destruct;
- (void)removeItemFromService;
- (void)replaceWithNewItem:(id)arg1;
- (void)itemUpdated;
- (id)initWithHamburgerItem:(id)arg1 withRegisteredModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
