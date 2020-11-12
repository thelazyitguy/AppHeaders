//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSSyncInternalSyncer.h"

@class DYNSSyncV2EntitiesGroupEntityManagerRegistry, DYNSSyncV2EntitiesUserEntityManagerRegistry, DYNSSyncV2TopicPaginationSaverLauncher;
@protocol DYNSNetworkApiRequestManager, JavaxInjectProvider;

@interface DYNSSyncV2PreviousTopicsSyncer : DYNSSyncInternalSyncer
{
    id <JavaxInjectProvider> executorProvider_;
    id <DYNSNetworkApiRequestManager> requestManager_;
    DYNSSyncV2TopicPaginationSaverLauncher *topicPaginationSaverLauncher_;
    DYNSSyncV2EntitiesUserEntityManagerRegistry *userEntityManagerRegistry_;
    DYNSSyncV2EntitiesGroupEntityManagerRegistry *groupEntityManagerRegistry_;
}

+ (void)initialize;
- (void)dealloc;
- (id)executeWithDYNSSyncInternalSyncRequest:(id)arg1;

@end
