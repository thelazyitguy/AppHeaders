//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSStorageProcessorsAbstractEventsProcessor.h"

@class DYNSDataUiMemberConverter, DYNSSyncV2EntitiesGroupEntityManagerRegistry, DYNSSyncV2SubscriptionsEventDispatcher;
@protocol ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUser, DYNSStorageControllersMembershipStorageControllerInternal, DYNSStorageControllersUserStorageControllerInternal, DYNSUsersApiUserManager;

@interface DYNSStorageProcessorsGroupMembershipEventsProcessor : DYNSStorageProcessorsAbstractEventsProcessor
{
    id <ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUser> accountUser_;
    DYNSSyncV2SubscriptionsEventDispatcher *eventDispatcher_;
    DYNSSyncV2EntitiesGroupEntityManagerRegistry *groupEntityManagerRegistry_;
    id <DYNSStorageControllersMembershipStorageControllerInternal> membershipStorageController_;
    DYNSDataUiMemberConverter *uiMemberConverter_;
    id <DYNSUsersApiUserManager> userManager_;
    id <DYNSStorageControllersUserStorageControllerInternal> userStorageControllerInternal_;
}

+ (void)initialize;
- (void)dealloc;
- (void)postProcessEventResultsWithBoolean:(_Bool)arg1 withId:(id)arg2;
- (id)writeToDatabaseWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withId:(id)arg2;
- (id)processEventBodyWithId:(id)arg1 withId:(id)arg2;
- (id)readFromDatabaseWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withId:(id)arg2;
- (id)preProcessEventBodiesWithComGoogleCommonCollectImmutableList:(id)arg1;

@end

