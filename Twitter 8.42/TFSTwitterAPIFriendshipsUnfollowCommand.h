//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithResponseModelBuilder.h>

@class NSNumber, NSString;

@interface TFSTwitterAPIFriendshipsUnfollowCommand : TFSTwitterAPICommandWithResponseModelBuilder
{
    _Bool _earned;
    NSNumber *_userID;
    NSString *_screenName;
    NSString *_impressionID;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool earned; // @synthesize earned=_earned;
@property(retain, nonatomic) NSString *impressionID; // @synthesize impressionID=_impressionID;
@property(retain, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
- (void)processResponse:(id)arg1;
- (id)request;
- (id)initWithAccountID:(id)arg1 userID:(id)arg2 screenName:(id)arg3 impressionID:(id)arg4 earned:(_Bool)arg5 context:(id)arg6 source:(unsigned long long)arg7 responseModelBuilder:(id)arg8 completionBlock:(CDUnknownBlockType)arg9;

@end

