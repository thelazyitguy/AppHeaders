//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RedditService, User;
@protocol AccountContext, UserProfilePresenterDelegate, ValueStoreObservation;

@interface UserProfilePresenter : NSObject
{
    _Bool _isFetching;
    id <AccountContext> _accountContext;
    User *_user;
    id <UserProfilePresenterDelegate> _delegate;
    id <ValueStoreObservation> _userObservation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <ValueStoreObservation> userObservation; // @synthesize userObservation=_userObservation;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(nonatomic) __weak id <UserProfilePresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) User *user; // @synthesize user=_user;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
- (_Bool)isUsernameForActiveService:(id)arg1;
- (void)addUsersSubreddit:(id)arg1 toCustomFeed:(id)arg2;
- (void)fetchSubredditForUserWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool shouldObscureHeaderImage;
- (void)blockUser;
- (void)addUserToCustomFeed:(id)arg1;
- (void)configureWithUser:(id)arg1;
- (void)configureWithUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)observeUser;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithAccountContext:(id)arg1;

@end

