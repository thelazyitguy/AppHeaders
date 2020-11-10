//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearchFilter-Protocol.h"

@class NSString, NSURL;

@interface SPTSearchFilterImplementation : NSObject <SPTSearchFilter>
{
    NSString *_title;
    NSURL *_url;
    NSString *_ubiReason;
    unsigned long long _ubiPosition;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long ubiPosition; // @synthesize ubiPosition=_ubiPosition;
@property(readonly, copy, nonatomic) NSString *ubiReason; // @synthesize ubiReason=_ubiReason;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithTitle:(id)arg1 url:(id)arg2 ubiReason:(id)arg3 ubiPosition:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

