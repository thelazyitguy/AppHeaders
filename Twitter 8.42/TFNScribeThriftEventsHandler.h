//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSScribeOutgoingEventsHandler-Protocol.h>

@class NSString, TFNTwitterScribeFlush;

@interface TFNScribeThriftEventsHandler : NSObject <TFSScribeOutgoingEventsHandler>
{
    NSString *_accountID;
    TFNTwitterScribeFlush *_scribeFlush;
}

- (void).cxx_destruct;
@property(nonatomic) __weak TFNTwitterScribeFlush *scribeFlush; // @synthesize scribeFlush=_scribeFlush;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void)handleScribeOutgoingEvents:(id)arg1 retryDistribution:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
