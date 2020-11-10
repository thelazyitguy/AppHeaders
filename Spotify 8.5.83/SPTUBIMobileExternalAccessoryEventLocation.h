//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIEventLocation-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileExternalAccessoryEventLocation : NSObject <SPTUBIEventLocation>
{
    _Bool _impressionEnabled;
    NSString *_applicationId;
    NSString *_specificationId;
    NSString *_specificationVersion;
    NSString *_generatorVersion;
    NSString *_annotatorVersion;
    NSString *_annotatorConfigurationVersion;
    NSArray *_eventPathComponents;
    NSString *_mode;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool impressionEnabled; // @synthesize impressionEnabled=_impressionEnabled;
@property(copy, nonatomic) NSArray *eventPathComponents; // @synthesize eventPathComponents=_eventPathComponents;
@property(readonly, copy, nonatomic) NSString *annotatorConfigurationVersion; // @synthesize annotatorConfigurationVersion=_annotatorConfigurationVersion;
@property(readonly, copy, nonatomic) NSString *annotatorVersion; // @synthesize annotatorVersion=_annotatorVersion;
@property(copy, nonatomic) NSString *generatorVersion; // @synthesize generatorVersion=_generatorVersion;
@property(copy, nonatomic) NSString *specificationVersion; // @synthesize specificationVersion=_specificationVersion;
@property(copy, nonatomic) NSString *specificationId; // @synthesize specificationId=_specificationId;
@property(copy, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
- (id)initWithComponents:(id)arg1 impression:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

