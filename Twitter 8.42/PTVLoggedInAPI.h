//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PTVModelLoggedInUserDelegate;

@interface PTVLoggedInAPI : NSObject
{
    id <PTVModelLoggedInUserDelegate> _loggedInUserDelegate;
}

+ (void)UploadGuestBroadcastingStatsDictionary:(id)arg1 ToEndpoint:(id)arg2 WithLoggedInUser:(id)arg3 BroadcastID:(id)arg4 CompletionBlock:(CDUnknownBlockType)arg5;
+ (void)UploadGuestBroadcastingEndOfStreamStats:(id)arg1 CompletionBlock:(CDUnknownBlockType)arg2;
+ (void)UploadGuestBroadcastingPeriodicPlaybackStats:(id)arg1 CompletionBlock:(CDUnknownBlockType)arg2;
+ (void)UploadGuestBroadcastingPeriodicPublishingStats:(id)arg1 CompletionBlock:(CDUnknownBlockType)arg2;
+ (void)RetrieveUsers:(id)arg1 LoggedInUser:(id)arg2 CompletionOnAsyncThread:(CDUnknownBlockType)arg3;
+ (void)AdjustRankForBroadcastWithID:(id)arg1 Cookie:(id)arg2 IncreaseRank:(_Bool)arg3 CompletionBlock:(CDUnknownBlockType)arg4;
+ (void)GetAuthorizationTokenForService:(id)arg1 LoggedInUser:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)InvalidateCachedAuthorizationTokenForService:(id)arg1;
+ (id)CachedAuthorizationTokenForService:(id)arg1;
+ (_Bool)ShouldCallGuestServiceForAPIEndPoint:(id)arg1 Broadcast:(id)arg2 GuestCallerSession:(id)arg3 WorkClient:(id)arg4 CompletionBlock:(CDUnknownBlockType)arg5;
+ (id)FullGuestAPIEndPointForAPIEndPoint:(id)arg1 Broadcast:(id)arg2;
+ (void)GuestServiceCachedHttpPost:(id)arg1 LoggedInUser:(id)arg2 Parameters:(id)arg3 WorkClient:(id)arg4 CachePolicy:(long long)arg5 CacheKey:(id)arg6 CompletionBlock:(CDUnknownBlockType)arg7;
+ (void)GuestServiceHttpPost:(id)arg1 LoggedInUser:(id)arg2 Parameters:(id)arg3 CompletionBlock:(CDUnknownBlockType)arg4;
+ (void)GuestServiceHttpPost:(id)arg1 LoggedInUser:(id)arg2 Parameters:(id)arg3 DataCompletionBlock:(CDUnknownBlockType)arg4;
+ (void)SafetyServiceHttpDelete:(id)arg1 LoggedInUser:(id)arg2 Parameters:(id)arg3 CompletionBlock:(CDUnknownBlockType)arg4;
+ (void)SafetyServiceHttpGet:(id)arg1 LoggedInUser:(id)arg2 Parameters:(id)arg3 WorkClient:(id)arg4 CachePolicy:(long long)arg5 CacheKey:(id)arg6;
+ (void)SafetyServiceHttpPut:(id)arg1 LoggedInUser:(id)arg2 Parameters:(id)arg3 CompletionBlock:(CDUnknownBlockType)arg4;
+ (_Bool)BadCookie:(id)arg1 ForAPIEndPoint:(id)arg2 BadCookieHandler:(CDUnknownBlockType)arg3;
+ (_Bool)BadCookie:(id)arg1 ForAPIEndPoint:(id)arg2 WithWorkClient:(id)arg3;
+ (void)CachedHttpPost:(id)arg1 ResponseClass:(Class)arg2 Parameters:(id)arg3 MultiPartFile:(id)arg4 CanRetry:(_Bool)arg5 CacheKey:(id)arg6 WorkClient:(id)arg7 CachePolicy:(long long)arg8 Completion:(CDUnknownBlockType)arg9;
+ (void)CachedHttpPost:(id)arg1 ResponseClass:(Class)arg2 Parameters:(id)arg3 MultiPartFile:(id)arg4 CacheKey:(id)arg5 WorkClient:(id)arg6 CachePolicy:(long long)arg7 Completion:(CDUnknownBlockType)arg8;
+ (void)SimpleHttpPost:(id)arg1 Parameters:(id)arg2 MultiPartFile:(id)arg3 CompletionBlock:(CDUnknownBlockType)arg4;
+ (void)HttpPost:(id)arg1 ResponseClass:(Class)arg2 Parameters:(id)arg3 MultiPartFile:(id)arg4 CompletionBlock:(CDUnknownBlockType)arg5;
+ (void)GetImageWithURL:(id)arg1 CachePrefix:(id)arg2 CachePolicy:(long long)arg3 ShouldCacheImage:(_Bool)arg4 Processor:(CDUnknownBlockType)arg5 ImmediateHandler:(CDUnknownBlockType)arg6 EventualHandler:(CDUnknownBlockType)arg7 ErrorHandler:(CDUnknownBlockType)arg8 ShouldExecute:(CDUnknownBlockType)arg9 Context:(id)arg10;
+ (void)SendBroadcasterSurveyAnswers:(id)arg1 Answers:(id)arg2 LoggedInUser:(id)arg3 CompletionBlock:(CDUnknownBlockType)arg4;
+ (void)GetBroadcasterSurvey:(id)arg1 LoggedInUser:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)GetSuperherosOfUserID:(id)arg1 LoggedInUser:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)GetFollowersAndSuperfansOfUserID:(id)arg1 LoggedInUser:(id)arg2 WorkClient:(id)arg3 CachePolicy:(long long)arg4;
+ (void)GetSuperfansOfUserID:(id)arg1 LoggedInUser:(id)arg2 WorkClient:(id)arg3 CachePolicy:(long long)arg4;
+ (void)EvictUserID:(id)arg1 FromMutualFollowersOfLoggedInUser:(id)arg2;
+ (void)RemoveUserID:(id)arg1 ToBlockedIDsForLoggedInUser:(id)arg2;
+ (void)AddUserID:(id)arg1 ToBlockedIDsForLoggedInUser:(id)arg2;
+ (void)PingUserWithID:(id)arg1 Message:(id)arg2 LoggedInUser:(id)arg3 CompletionBlock:(CDUnknownBlockType)arg4;
+ (void)BulkBlockUsersWithIDs:(id)arg1 LoggedInUser:(id)arg2 BroadcastID:(id)arg3 CompletionBlock:(CDUnknownBlockType)arg4;
+ (void)UnblockUserWithID:(id)arg1 LoggedInUser:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)BlockUserWithID:(id)arg1 LoggedInUser:(id)arg2 MessageData:(id)arg3 BroadcastID:(id)arg4 CompletionBlock:(CDUnknownBlockType)arg5;
+ (void)UnmuteUserWithID:(id)arg1 Cookie:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)MuteUserWithID:(id)arg1 Cookie:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)UnfollowUserWithID:(id)arg1 LoggedInUser:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)FollowUserWithID:(id)arg1 LoggedInUser:(id)arg2 FacebookToken:(id)arg3 GoogleToken:(id)arg4 FromFacebookSuggested:(_Bool)arg5 FromGoogleSuggested:(_Bool)arg6 SourceType:(id)arg7 CompletionBlock:(CDUnknownBlockType)arg8;
+ (void)ReportUserWithID:(id)arg1 LoggedInUser:(id)arg2 ReportType:(long long)arg3 HostViewName:(id)arg4 CompletionBlock:(CDUnknownBlockType)arg5;
+ (_Bool)HasReportedUserWithID:(id)arg1 ForBroadcast:(id)arg2;
+ (void)ReportUserWithID:(id)arg1 ForBroadcast:(id)arg2;
+ (id)CacheOfReportedUserIDsByBroadcastIDs;
+ (void)GetBroadcastHistoryForUserID:(id)arg1 LoggedInUser:(id)arg2 ShouldFetchAllHistory:(_Bool)arg3 WorkClient:(id)arg4 CachePolicy:(long long)arg5;
+ (void)GetPaginatedBroadcastHistoryForUserID:(id)arg1 LoggedInUser:(id)arg2 Cursor:(id)arg3 WorkClient:(id)arg4 CachePolicy:(long long)arg5;
+ (void)GetFollowersWithIntersectionsWithUserID:(id)arg1 LoggedInUser:(id)arg2 WorkClient:(id)arg3 CachePolicy:(long long)arg4;
+ (void)GetIntersectionsWithUserID:(id)arg1 LoggedInUser:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)GetMutualFollowersOfUserID:(id)arg1 LoggedInUser:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)GetMutualFollowersOfUserID:(id)arg1 LoggedInUser:(id)arg2 WorkClient:(id)arg3 CachePolicy:(long long)arg4;
+ (void)GetFollowingForUserID:(id)arg1 LoggedInUser:(id)arg2 WorkClient:(id)arg3 CachePolicy:(long long)arg4;
+ (void)GetFollowersForUserID:(id)arg1 LoggedInUser:(id)arg2 WorkClient:(id)arg3 CachePolicy:(long long)arg4;
+ (void)RefreshUserObject:(id)arg1 UserID:(id)arg2 LoggedInUser:(id)arg3 WorkClient:(id)arg4 CachePolicy:(long long)arg5;
+ (void)RefreshUserObject:(id)arg1 LoggedInUser:(id)arg2 WorkClient:(id)arg3 CachePolicy:(long long)arg4;
+ (id)CachedUserObjectWithID:(id)arg1;
+ (id)CacheKeyForUserWithID:(id)arg1;
+ (void)GetUserWithUsername:(id)arg1 LoggedInUser:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)GetUserWithID:(id)arg1 LoggedInUser:(id)arg2 ReturnCachedUserIfExists:(_Bool)arg3 CompletionBlock:(CDUnknownBlockType)arg4;
+ (void)GetUserWithID:(id)arg1 LoggedInUser:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)GetUserWithID:(id)arg1 LoggedInUser:(id)arg2 WorkClient:(id)arg3 CachePolicy:(long long)arg4;
+ (void)GetSuggestedModeratorsForLoggedInUser:(id)arg1 WorkClient:(id)arg2 CachePolicy:(long long)arg3;
+ (void)GetModerationReportForBroadcastID:(id)arg1 LoggedInUser:(id)arg2 Cursor:(id)arg3 WorkClient:(id)arg4 CachePolicy:(long long)arg5;
+ (void)GetModerationReportCountForBroadcastID:(id)arg1 LoggedInUser:(id)arg2 WorkClient:(id)arg3 CachePolicy:(long long)arg4;
+ (void)CastJurorVoteWithLoggedInUser:(id)arg1 UUIDForMessageOnTrial:(id)arg2 VoteType:(unsigned long long)arg3 CompletionBlock:(CDUnknownBlockType)arg4;
+ (void)BeginJuryDutyWithLoggedInUser:(id)arg1 UUIDForMessageOnTrial:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)ReportChatMessage:(id)arg1 LoggedInUser:(id)arg2 ReportType:(unsigned long long)arg3 Broadcast:(id)arg4 ChatAccessToken:(id)arg5 CompletionBlock:(CDUnknownBlockType)arg6;
+ (void)GetAmplifyProgramsForPublisherID:(id)arg1 ConsumerKey:(id)arg2 ConsumerSecret:(id)arg3 AuthToken:(id)arg4 AuthTokenSecret:(id)arg5 Completion:(CDUnknownBlockType)arg6;
+ (void)AssociateBroadcasterTweetID:(id)arg1 WithBroadcastID:(id)arg2 AmplifyProgramID:(id)arg3 Cookie:(id)arg4 CompletionBlock:(CDUnknownBlockType)arg5;
+ (void)PostBroadcasterTweetForBroadcastID:(id)arg1 AmplifyProgramID:(id)arg2 Cookie:(id)arg3 OauthToken:(id)arg4 OauthTokenSecret:(id)arg5 CompletionBlock:(CDUnknownBlockType)arg6;
+ (void)GetReplayMessagesForChatRoom:(id)arg1 WithStartDate:(id)arg2 Cursor:(id)arg3 ForWorkClient:(id)arg4 CachePolicy:(long long)arg5;
+ (void)UploadReplayStats:(id)arg1 Cookie:(id)arg2 BroadcastID:(id)arg3 CompletionBlock:(CDUnknownBlockType)arg4;
+ (void)GetReplayChunksWithLoggedInUser:(id)arg1 BroadcastID:(id)arg2 WorkClient:(id)arg3 CachePolicy:(long long)arg4;
+ (void)AddInvitees:(id)arg1 ForBroadcast:(id)arg2 LoggedInUser:(id)arg3 CompletionBlock:(CDUnknownBlockType)arg4;
+ (void)GuestNotifyFollowersForBroadcast:(id)arg1 AtTimeCode:(double)arg2 LoggedInUser:(id)arg3 CompletionBlock:(CDUnknownBlockType)arg4;
+ (void)GetTURNServersForGuestBroadcastingWithLoggedInUser:(id)arg1 CompletionBlock:(CDUnknownBlockType)arg2;
+ (void)EjectGuestBroadcastStreamForGuestCallerSession:(id)arg1 ChatToken:(id)arg2 Broadcast:(id)arg3 NTPForCurrentFrame:(unsigned long long)arg4 NTPForBroadcasterFrame:(unsigned long long)arg5 LoggedInUser:(id)arg6 CompletionBlock:(CDUnknownBlockType)arg7;
+ (void)EndGuestBroadcastStreamForGuestCallerSession:(id)arg1 ChatToken:(id)arg2 Broadcast:(id)arg3 NTPForCurrentFrame:(unsigned long long)arg4 NTPForBroadcasterFrame:(unsigned long long)arg5 LoggedInUser:(id)arg6 GuestAnalyticsManager:(id)arg7 CompletionBlock:(CDUnknownBlockType)arg8;
+ (void)CompleteCountdownForPublishingGuestCallerSession:(id)arg1 ChatToken:(id)arg2 Broadcast:(id)arg3 NTPForCurrentFrame:(unsigned long long)arg4 NTPForBroadcasterFrame:(unsigned long long)arg5 LoggedInUser:(id)arg6 CompletionBlock:(CDUnknownBlockType)arg7;
+ (void)BeginCountdownForPublishingGuestCallerSession:(id)arg1 ChatToken:(id)arg2 Broadcast:(id)arg3 LoggedInUser:(id)arg4 CompletionBlock:(CDUnknownBlockType)arg5;
+ (void)MuteOrUnMuteGuestBroadcastStreamForGuestCallerSession:(id)arg1 ChatToken:(id)arg2 Broadcast:(id)arg3 LoggedInUser:(id)arg4 CompletionBlock:(CDUnknownBlockType)arg5;
+ (void)CancelGuestBroadcastStreamForGuestCallerSession:(id)arg1 ChatToken:(id)arg2 Broadcast:(id)arg3 LoggedInUser:(id)arg4 GuestAnalyticsManager:(id)arg5 CompletionBlock:(CDUnknownBlockType)arg6;
+ (void)CreateGuestAccessForBroadcast:(id)arg1 GuestCallerSession:(id)arg2 LoggedInUser:(id)arg3 CompletionBlock:(CDUnknownBlockType)arg4;
+ (void)ApproveCallInRequestForGuestCallerSession:(id)arg1 ChatToken:(id)arg2 Broadcast:(id)arg3 LoggedInUser:(id)arg4 CompletionBlock:(CDUnknownBlockType)arg5;
+ (void)CancelCallInRequestForGuestCallerSession:(id)arg1 ChatToken:(id)arg2 Broadcast:(id)arg3 LoggedInUser:(id)arg4 GuestAnalyticsManager:(id)arg5 CompletionBlock:(CDUnknownBlockType)arg6;
+ (void)RequestCallInForBroadcast:(id)arg1 ChatToken:(id)arg2 NTPForCurrentFrame:(unsigned long long)arg3 NTPForBroadcasterFrame:(unsigned long long)arg4 LoggedInUser:(id)arg5 GuestCallerSession:(id)arg6 CompletionBlock:(CDUnknownBlockType)arg7;
+ (void)SetCallInListDisabledStateForBroadcast:(id)arg1 IsDisabled:(_Bool)arg2 ChatToken:(id)arg3 NTPForCurrentFrame:(unsigned long long)arg4 NTPForBroadcasterFrame:(unsigned long long)arg5 LoggedInUser:(id)arg6 CompletionBlock:(CDUnknownBlockType)arg7;
+ (void)InviteViewersToCallInToBroadcast:(id)arg1 ChatToken:(id)arg2 NTPForCurrentFrame:(unsigned long long)arg3 NTPForBroadcasterFrame:(unsigned long long)arg4 LoggedInUser:(id)arg5 CompletionBlock:(CDUnknownBlockType)arg6;
+ (void)GetGuestStateForIndividualSession:(id)arg1 Broadcast:(id)arg2 LoggedInUser:(id)arg3 WorkClient:(id)arg4 CachePolicy:(long long)arg5;
+ (void)GetGuestStateForAllSessionsInBroadcast:(id)arg1 LoggedInUser:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)GetGuestStateForAllSessionsInBroadcast:(id)arg1 LoggedInUser:(id)arg2 WorkClient:(id)arg3 CachePolicy:(long long)arg4;
+ (void)EditBroadcastWithTitle:(id)arg1 ReplayStartTime:(double)arg2 ReplayThumbnailTimeCode:(double)arg3 BroadcastID:(id)arg4 Cookie:(id)arg5 CompletionBlock:(CDUnknownBlockType)arg6;
+ (void)LocallyHideBroadcastWithID:(id)arg1 LoggedInUser:(id)arg2;
+ (void)PersistBroadcastWithID:(id)arg1 Cookie:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (_Bool)HasReportedOrHiddenBroadcastWithID:(id)arg1;
+ (void)ResetCacheOfReportedBroadcastIDs;
+ (void)CacheReportedBroadcastWithID:(id)arg1;
+ (id)CacheOfReportedBroadcastIDs;
+ (void)ReportBroadcastWithID:(id)arg1 LoggedInUser:(id)arg2 ReportType:(long long)arg3 ReportedUserID:(id)arg4 Timecode:(double)arg5 Ntp:(unsigned long long)arg6 IsReportFromFeed:(_Bool)arg7 CompletionBlock:(CDUnknownBlockType)arg8;
+ (void)ReportBroadcastWithID:(id)arg1 LoggedInUser:(id)arg2 ReportType:(long long)arg3 IsReportFromFeed:(_Bool)arg4 CompletionBlock:(CDUnknownBlockType)arg5;
+ (void)ShareBroadcast:(id)arg1 AtTimeCode:(double)arg2 WithFollowerIDs:(id)arg3 WithChannelID:(id)arg4 LoggedInUser:(id)arg5 CompletionBlock:(CDUnknownBlockType)arg6;
+ (void)RefreshBroadcasts:(id)arg1 LoggedInUser:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)UploadWatchBroadcastStatistics:(id)arg1 LoggedInUser:(id)arg2 BroadcastID:(id)arg3 CompletionBlock:(CDUnknownBlockType)arg4;
+ (void)StopWatchingWithLoggedInUser:(id)arg1 StopWatchingDate:(id)arg2 Session:(id)arg3 Log:(id)arg4 WatchContext:(id)arg5 AddedParameters:(id)arg6 CompletionBlock:(CDUnknownBlockType)arg7;
+ (void)PingWatchingWithLoggedInUser:(id)arg1 Session:(id)arg2 Log:(id)arg3 AddedParameters:(id)arg4 Completion:(CDUnknownBlockType)arg5;
+ (void)StartWatchingWithLoggedInUser:(id)arg1 LifeCycleToken:(id)arg2 IsAutoplay:(_Bool)arg3 PreviewTimeInterval:(double)arg4 AddedParameters:(id)arg5 WorkClient:(id)arg6 CachePolicy:(long long)arg7;
+ (void)GetBroadcastViewersForBroadcastID:(id)arg1 LoggedInUser:(id)arg2 BroadcasterID:(id)arg3 PreferredSizeForViewerProfileImage:(struct CGSize)arg4 WorkClient:(id)arg5 CachePolicy:(long long)arg6;
+ (void)GetChatAccessWithLoggedInUser:(id)arg1 ChatToken:(id)arg2 CanRetry:(_Bool)arg3 WorkClient:(id)arg4 CachePolicy:(long long)arg5;
+ (void)GetVideoAccessWithLoggedInUser:(id)arg1 Broadcast:(id)arg2 PreviousLifeCycleToken:(id)arg3 PreviousChatToken:(id)arg4 CanRetry:(_Bool)arg5 LaunchingFromPushNotification:(_Bool)arg6 ShouldFetchHighlightURLs:(_Bool)arg7 WorkClient:(id)arg8 CachePolicy:(long long)arg9;
+ (void)GetTypeAheadSuggestionsFromCurrentInput:(id)arg1 Cookie:(id)arg2 WorkClient:(id)arg3 CachePolicy:(long long)arg4;
+ (void)DisputeCopyrightViolation:(_Bool)arg1 WithCookie:(id)arg2 BroadcastID:(id)arg3 CompletionBlock:(CDUnknownBlockType)arg4;
+ (void)UploadBroadcastLogsWithCookie:(id)arg1 BroadcastID:(id)arg2 BroadcastLogs:(id)arg3 CompletionBlock:(CDUnknownBlockType)arg4;
+ (void)UploadBroadcastStatistics:(id)arg1 WithCookie:(id)arg2 BroadcastID:(id)arg3 CompletionBlock:(CDUnknownBlockType)arg4;
+ (void)GetReplayVideoAccessWithLoggedInUser:(id)arg1 Broadcast:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (id)APIStringForContentType:(long long)arg1;
+ (void)GetBroadcastShareURLWithCookie:(id)arg1 BroadcastID:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)SetVisibilityLimited:(_Bool)arg1 Broadcast:(id)arg2 Cookie:(id)arg3 CompletionBlock:(CDUnknownBlockType)arg4;
+ (void)UpdateBroadcastID:(id)arg1 WithCookie:(id)arg2 ContentType:(long long)arg3 CompletionBlock:(CDUnknownBlockType)arg4;
+ (void)DeleteBroadcast:(id)arg1 Cookie:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)DeleteBroadcastID:(id)arg1 WithCookie:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)StopBroadcast:(id)arg1 WithCookie:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)RefreshLiveBroadcasts:(id)arg1 LoggedInUser:(id)arg2 CompletionBlock:(CDUnknownBlockType)arg3;
+ (void)StartBroadcast:(id)arg1 WithCookie:(id)arg2 AuthToken:(id)arg3 AuthSecret:(id)arg4 Title:(id)arg5 LocationSharingEnabled:(_Bool)arg6 Coordinate:(struct CLLocationCoordinate2D)arg7 ChatType:(unsigned long long)arg8 PrivateBroadcastUserIDs:(id)arg9 PrivateChannelIDs:(id)arg10 IsPublicHiddenBroadcast:(_Bool)arg11 Sparkles:(_Bool)arg12 DoesBroadcastAcceptGuests:(_Bool)arg13 BroadcasterGuestSession:(id)arg14 Invitees:(id)arg15 TwitterInvitees:(id)arg16 Encrypted:(_Bool)arg17 VideoBitRate:(int)arg18 VideoRotation:(long long)arg19 ContentType:(long long)arg20 CompletionBlock:(CDUnknownBlockType)arg21;
+ (void)CreateBroadcastWithCookie:(id)arg1 Width:(double)arg2 Height:(double)arg3 Coordinate:(struct CLLocationCoordinate2D)arg4 HasModeration:(_Bool)arg5 DoesBroadcastAcceptGuests:(_Bool)arg6 Region:(id)arg7 PreferredLanguages:(id)arg8 AppComponent:(id)arg9 CompletionBlock:(CDUnknownBlockType)arg10;
+ (void)CreateBroadcastWithCookie:(id)arg1 Width:(double)arg2 Height:(double)arg3 Coordinate:(struct CLLocationCoordinate2D)arg4 HasModeration:(_Bool)arg5 DoesBroadcastAcceptGuests:(_Bool)arg6 Region:(id)arg7 PreferredLanguages:(id)arg8 ReplayKitSource:(id)arg9 ReplayKitAppBundle:(id)arg10 ReplayKitAppName:(id)arg11 AppComponent:(id)arg12 CompletionBlock:(CDUnknownBlockType)arg13;
+ (void)GetSignerRegionWithCookie:(id)arg1 CompletionBlock:(CDUnknownBlockType)arg2;
+ (void)PerformSpeedTestWithCookie:(id)arg1 CompletionBlock:(CDUnknownBlockType)arg2;
+ (id)SharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PTVModelLoggedInUserDelegate> loggedInUserDelegate; // @synthesize loggedInUserDelegate=_loggedInUserDelegate;

@end

