//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface FTLProbe : NSObject
{
    NSString *_name;
    NSURL *_url;
}

- (void).cxx_destruct;
@property(readonly) NSURL *url; // @synthesize url=_url;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)URLWithPulse:(id)arg1;
- (void)executeWithFetcher:(id)arg1 timeout:(double)arg2 pulse:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithName:(id)arg1 URL:(id)arg2;

@end

