//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANPIPhoneTabBarConfigurationProvider.h"

#import "ANPTabBarEventDelegate-Protocol.h"

@class NSArray, NSString;

@interface ANPCNIPhoneTabBarConfigurationProvider : ANPIPhoneTabBarConfigurationProvider <ANPTabBarEventDelegate>
{
    NSArray *_tabBarItems;
    CDUnknownBlockType _homeViewControllerBlock;
    CDUnknownBlockType _cartViewControllerBlock;
}

@property(copy, nonatomic) CDUnknownBlockType cartViewControllerBlock; // @synthesize cartViewControllerBlock=_cartViewControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType homeViewControllerBlock; // @synthesize homeViewControllerBlock=_homeViewControllerBlock;
- (id)tabBarItems;
- (void).cxx_destruct;
- (id)homeViewControllerForTab:(unsigned long long)arg1;
- (id)tabBarItemArray;
- (id)initWithHomeViewController:(CDUnknownBlockType)arg1 cartViewController:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

