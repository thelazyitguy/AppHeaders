//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTUBILogger;

@interface SPTGeniusLoggingService : NSObject
{
    id <SPTUBILogger> _logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTUBILogger> logger; // @synthesize logger=_logger;
- (void)logLinkInteractionWithTrackURI:(id)arg1 destinationURL:(id)arg2 index:(unsigned long long)arg3 type:(id)arg4;
- (void)logAnnotationImpressionWithTrackURI:(id)arg1 index:(unsigned long long)arg2 type:(id)arg3;
- (void)logComponentImpressionWithTrackURI:(id)arg1;
- (id)initWithLogger:(id)arg1;

@end
