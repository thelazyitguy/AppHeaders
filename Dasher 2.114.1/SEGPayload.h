//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SEGPayload : NSObject
{
    NSDictionary *_context;
    NSDictionary *_integrations;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *integrations; // @synthesize integrations=_integrations;
@property(readonly, nonatomic) NSDictionary *context; // @synthesize context=_context;
- (id)initWithContext:(id)arg1 integrations:(id)arg2;
@property(readonly) NSDictionary *options;

@end
