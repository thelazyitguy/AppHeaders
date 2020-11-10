//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/PDLQueryProcessorFilter-Protocol.h>

@class NSSet, NSString, PDLClientConfig;
@protocol PDLExperimentsService, PDLQueryProcessorFilterDelegate;

@interface PDLQueryProcessorFilterImpl : NSObject <PDLQueryProcessorFilter>
{
    NSString *_query;
    PDLClientConfig *_clientConfig;
    NSSet *_emailsToFilter;
    id <PDLExperimentsService> _experimentsService;
    NSSet *_inAppNotificationTargetsToFilter;
    NSSet *_phonesToFilter;
    id <PDLQueryProcessorFilterDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PDLQueryProcessorFilterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSSet *phonesToFilter; // @synthesize phonesToFilter=_phonesToFilter;
@property(readonly, nonatomic) NSSet *inAppNotificationTargetsToFilter; // @synthesize inAppNotificationTargetsToFilter=_inAppNotificationTargetsToFilter;
@property(readonly, nonatomic) id <PDLExperimentsService> experimentsService; // @synthesize experimentsService=_experimentsService;
@property(readonly, nonatomic) NSSet *emailsToFilter; // @synthesize emailsToFilter=_emailsToFilter;
@property(readonly, nonatomic) PDLClientConfig *clientConfig; // @synthesize clientConfig=_clientConfig;
@property(readonly, nonatomic) NSString *query; // @synthesize query=_query;
- (id)filteredAutocompletions:(id)arg1 dataSource:(long long)arg2 options:(id)arg3;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

