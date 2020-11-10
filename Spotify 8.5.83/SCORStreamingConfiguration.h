//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SCORStreamingConfiguration : NSObject
{
    shared_ptr_f29d09f4 _cppStreamingConfiguration;
    NSMutableDictionary *_publisherConfigurations;
}

+ (id)streamingConfigurationWithBuilderBlock:(CDUnknownBlockType)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeAllLabels;
- (void)removeLabelWithName:(id)arg1;
- (void)addLabels:(id)arg1;
- (void)setLabelWithName:(id)arg1 value:(id)arg2;
- (id)streamingPublisherConfigurationWithPublisherId:(id)arg1;
- (id)initWithBuilder:(id)arg1;
- (shared_ptr_f29d09f4)getCppStreamingConfiguration;
- (void)setCppStreamingConfiguration:(shared_ptr_f29d09f4)arg1;
- (id)initWithCppStreamingConfiguration:(shared_ptr_f29d09f4)arg1;

@end

