//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTVideoPlayerMessage.h"

@class NSString;

@interface SPTVideoError : SPTVideoPlayerMessage
{
    int _code;
    NSString *_extra;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(readonly, nonatomic) int code; // @synthesize code=_code;
- (id)serializedDictionary;
- (id)initWithCode:(int)arg1 extra:(id)arg2;

@end
