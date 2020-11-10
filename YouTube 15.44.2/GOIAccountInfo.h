//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface GOIAccountInfo : NSObject <NSCopying>
{
    NSString *_accountID;
    NSString *_displayName;
    NSURL *_photoURL;
    NSURL *_profileURL;
    NSString *_username;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSURL *profileURL; // @synthesize profileURL=_profileURL;
@property(readonly, nonatomic) NSURL *photoURL; // @synthesize photoURL=_photoURL;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAccountInfo:(id)arg1;

@end
