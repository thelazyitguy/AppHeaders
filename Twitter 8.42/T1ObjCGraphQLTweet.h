//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TFSTwitterCardData, TFSTwitterStatus, TFSTwitterUser;

@interface T1ObjCGraphQLTweet : NSObject
{
    // Error parsing type: , name: status
    // Error parsing type: , name: fromUser
    // Error parsing type: , name: cardData
    // Error parsing type: , name: cardUsers
    // Error parsing type: , name: retweetedTweet
    // Error parsing type: , name: quotedTweet
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) T1ObjCGraphQLTweet *quotedTweet; // @synthesize quotedTweet;
@property(nonatomic, readonly) T1ObjCGraphQLTweet *retweetedTweet; // @synthesize retweetedTweet;
@property(nonatomic, readonly) NSArray *cardUsers;
@property(nonatomic, readonly) TFSTwitterCardData *cardData; // @synthesize cardData;
@property(nonatomic, readonly) TFSTwitterUser *fromUser; // @synthesize fromUser;
@property(nonatomic, readonly) TFSTwitterStatus *status; // @synthesize status;

@end

