//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/NSObject-Protocol.h>

@class NSArray, NSString, PTVGuestRoomReportType, PTVGuestRoomUser, PTVGuestView;
@protocol PTVGuestRoomControllerObserver;

@protocol PTVGuestRoomController <NSObject>
@property(readonly, nonatomic) NSArray *users;
@property(readonly, nonatomic) unsigned long long totalUsersCount;
@property(nonatomic) _Bool isMuted;
- (NSArray *)ownedViewControllers;
- (PTVGuestView *)guestViewForUser:(PTVGuestRoomUser *)arg1;
- (void)reportGuestRoomWithType:(PTVGuestRoomReportType *)arg1;
- (void)reportUser:(PTVGuestRoomUser *)arg1 withType:(PTVGuestRoomReportType *)arg2;
- (NSArray *)reportTypesForGuestRoom;
- (NSArray *)reportTypesForUser:(PTVGuestRoomUser *)arg1;
- (void)unblockUser:(PTVGuestRoomUser *)arg1;
- (void)blockUser:(PTVGuestRoomUser *)arg1;
- (void)sendText:(NSString *)arg1 language:(NSString *)arg2;
- (void)sendPrivateEmoji:(NSString *)arg1 toUser:(PTVGuestRoomUser *)arg2;
- (void)sendEmoji:(NSString *)arg1;
- (void)removeUserAsSpeaker:(PTVGuestRoomUser *)arg1;
- (void)acceptUserAsSpeaker:(PTVGuestRoomUser *)arg1;
- (_Bool)canAcceptMoreSpeakers;
- (void)switchAsListener;
- (void)cancelSwitchAsSpeaker;
- (void)switchAsSpeaker;
- (void)shutdown;
- (void)joinExistingRoomWithRoomID:(NSString *)arg1;
- (void)createNewRoomWithChannelID:(NSString *)arg1;
- (void)removeGuestRoomControllerObserver:(id <PTVGuestRoomControllerObserver>)arg1;
- (void)addGuestRoomControllerObserver:(id <PTVGuestRoomControllerObserver>)arg1;
@end
