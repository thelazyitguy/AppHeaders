//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface FeedPostEventBarOptions : NSObject <NSCopying>
{
    _Bool _shouldShowPostInfo;
    long long _separatorPosition;
}

+ (id)defaultEventBarOptions;
@property(nonatomic) _Bool shouldShowPostInfo; // @synthesize shouldShowPostInfo=_shouldShowPostInfo;
@property(nonatomic) long long separatorPosition; // @synthesize separatorPosition=_separatorPosition;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

