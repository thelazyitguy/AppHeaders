//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Economy/_TtC7Economy27BaseAccountDependentService.h>

@interface _TtC7Economy15PowerupsService : _TtC7Economy27BaseAccountDependentService
{
    // Error parsing type: , name: impl
    // Error parsing type: , name: econAccountSettingsProvider
    // Error parsing type: , name: subredditPowerupsAsyncCache
    // Error parsing type: , name: myPowerupsInfoAsyncCache
    // Error parsing type: , name: userPowerupsInfoAsyncCache
}

- (void).cxx_destruct;
- (id)subscribeToSubredditPowerupsForSubredditID:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)fetchSubredditPowerupsForSubredditID:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)subscribeToSupporterWithUserPk:(id)arg1 subredditID:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)refreshMyPowerups;
- (id)subscribeToAboutItemViewModelsWithUsername:(id)arg1 correlationID:(id)arg2 delegate:(id)arg3 callback:(CDUnknownBlockType)arg4;

@end

