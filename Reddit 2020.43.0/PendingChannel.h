//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/ObservableObject.h>

#import "ChatListCollectionCellModel-Protocol.h"
#import "REDSelectableModel-Protocol.h"

@class NSArray, NSString, RedditService;

@interface PendingChannel : ObservableObject <REDSelectableModel, ChatListCollectionCellModel>
{
    _Bool _selected;
    NSArray *_members;
    NSString *_name;
    unsigned long long _createdAt;
    RedditService *_service;
}

+ (id)keyPathsToObserveChanges;
- (void).cxx_destruct;
@property(readonly, nonatomic) RedditService *service; // @synthesize service=_service;
@property(nonatomic) unsigned long long createdAt; // @synthesize createdAt=_createdAt;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSArray *members; // @synthesize members=_members;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)unreadCount;
- (id)lastMessage;
- (id)inviter;
- (_Bool)isGroup;
- (id)displayTitle;
- (id)memberString;
- (_Bool)joined;
@property(readonly, nonatomic) NSArray *membersExceptMe;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
