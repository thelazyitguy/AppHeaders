//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol T1SpheresUserSettingsRepositoryDelegate;

@interface T1SpheresUserSettingsRepository : NSObject
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: accountID
    // Error parsing type: , name: pinnedArchiver
    // Error parsing type: , name: rankingModeArchiver
    // Error parsing type: , name: viewModelsFuture
    // Error parsing type: , name: persistentListObservers
    // Error parsing type: , name: durableStorageHelper
    // Error parsing type: , name: persistentPinnedListsObserver
    // Error parsing type: , name: persistentModelObserver
    // Error parsing type: , name: lastObservedModel
    // Error parsing type: , name: listHeaderDataFetcher
    // Error parsing type: , name: persistentHydratedListsObserver
}

- (void).cxx_destruct;
- (id)init;
- (void)featureSwitchesDidUpdate:(id)arg1;
- (void)didRemoveAccount:(id)arg1;
- (void)unarchiveSphereViewModelsWithCompletion:(CDUnknownBlockType)arg1;
- (void)archivePinnedListIDs:(id)arg1;
- (void)archiveSphereViewModels:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadInitialPinnedListModels;
- (id)initWithAccount:(id)arg1;
@property(nonatomic) __weak id <T1SpheresUserSettingsRepositoryDelegate> delegate; // @synthesize delegate;

@end

