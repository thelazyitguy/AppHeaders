//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithResponseModelBuilder.h>

@class NSNumber, NSString;

@interface TFSTwitterAPIFriendshipsDenyCommand : TFSTwitterAPICommandWithResponseModelBuilder
{
    NSNumber *_userID;
    NSString *_screenName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
- (void)processResponse:(id)arg1;
- (id)request;
- (id)initWithAccountID:(id)arg1 userID:(id)arg2 screenName:(id)arg3 context:(id)arg4 source:(unsigned long long)arg5 responseModelBuilder:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;

@end

