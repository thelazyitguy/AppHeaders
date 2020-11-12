//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithExternalResponseProcessor.h>

@class NSNumber, NSString;

@interface TFSTwitterAPIFollowersListCommand : TFSTwitterAPICommandWithExternalResponseProcessor
{
    _Bool _allowPromotedContent;
    NSNumber *_userID;
    NSString *_screenName;
    NSString *_cursor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool allowPromotedContent; // @synthesize allowPromotedContent=_allowPromotedContent;
@property(readonly, copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(readonly, copy, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(readonly, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
- (id)request;
- (id)initWithAccountID:(id)arg1 userID:(id)arg2 screenName:(id)arg3 cursor:(id)arg4 context:(id)arg5 source:(unsigned long long)arg6 responseModelBuilder:(id)arg7 responseProcessorBlock:(CDUnknownBlockType)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (id)initWithAccountID:(id)arg1 screenName:(id)arg2 cursor:(id)arg3 context:(id)arg4 source:(unsigned long long)arg5 responseModelBuilder:(id)arg6 responseProcessorBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (id)initWithAccountID:(id)arg1 userID:(id)arg2 cursor:(id)arg3 context:(id)arg4 source:(unsigned long long)arg5 responseModelBuilder:(id)arg6 responseProcessorBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;

@end
