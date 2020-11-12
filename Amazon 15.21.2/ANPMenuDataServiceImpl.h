//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RDCMenuData2pService-Protocol.h"
#import "RDCMenuDataInternalService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface ANPMenuDataServiceImpl : NSObject <RDCMenuData2pService, RDCMenuDataInternalService>
{
    NSMutableDictionary *_menuOverrides;
    NSMutableDictionary *_itemTypeHandlers;
    NSMutableDictionary *_delegateGroups;
}

@property(retain, nonatomic) NSMutableDictionary *delegateGroups; // @synthesize delegateGroups=_delegateGroups;
@property(retain, nonatomic) NSMutableDictionary *itemTypeHandlers; // @synthesize itemTypeHandlers=_itemTypeHandlers;
@property(retain, nonatomic) NSMutableDictionary *menuOverrides; // @synthesize menuOverrides=_menuOverrides;
- (void).cxx_destruct;
- (_Bool)guardOverrideDictionaryAgainstMultiThreading;
- (void)sendItemTypeHandlerUpdateForGroup:(id)arg1;
- (void)sendOverrideUpdateForGroup:(id)arg1;
- (void)sendMenuUpdateRequestForGroup:(id)arg1;
- (void)removeItemTypeHandlerForGroup:(id)arg1 itemTypeHandler:(id)arg2;
- (void)addItemTypeHandlerForGroup:(id)arg1 itemTypeHandler:(id)arg2;
- (void)removeMenuItemOverrideForGroup:(id)arg1 itemId:(id)arg2;
- (void)addMenuItemOverrideForGroup:(id)arg1 itemId:(id)arg2 overrideItem:(id)arg3;
- (void)requestMenuUpdateForGroup:(id)arg1;
- (void)removeDelegateForGroup:(id)arg1 delegate:(id)arg2;
- (void)addDelegateForGroup:(id)arg1 delegate:(id)arg2;
- (struct NSArray *)getItemHandlersForGroup:(id)arg1;
- (struct NSDictionary *)getOverridesForGroup:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
