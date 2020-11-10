//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTEntityStoreObserver-Protocol.h>
#import <Module_Framework/YTPageStyleControllerObserver-Protocol.h>

@class GIMMe, NSMutableDictionary, NSString;
@protocol ELMStore, YTInMemoryEntityStore;

@interface YTThemeEntityManager : NSObject <YTEntityStoreObserver, YTPageStyleControllerObserver>
{
    id <YTInMemoryEntityStore> _entityStore;
    id <ELMStore> _elementsStore;
    NSMutableDictionary *_themeSets;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)writeThemeToEntitiesStoreWithStyleKey:(id)arg1;
- (void)refreshAllActiveThemeEntities;
- (void)didUpdateKey:(id)arg1 inEntityStore:(id)arg2 withUpdateType:(unsigned long long)arg3 previousEntity:(id)arg4 entity:(id)arg5;
- (void)pageStyleControllerPageStyleDidChange;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

