//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSTextCheckingResult.h>

@class NSURL;

@interface GIDASCURLCheckingResult : NSTextCheckingResult
{
    struct _NSRange _range;
    _Bool _needsAuth;
    NSURL *_URL;
}

+ (id)URLCheckingResultWithRange:(struct _NSRange)arg1 URL:(id)arg2 needsAuth:(_Bool)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) _Bool needsAuth; // @synthesize needsAuth=_needsAuth;
- (id)description;
- (unsigned long long)resultType;
- (struct _NSRange)range;

@end
