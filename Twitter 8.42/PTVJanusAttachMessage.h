//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVJanusMessage.h>

@class NSString;

@interface PTVJanusAttachMessage : PTVJanusMessage
{
    NSString *_plugin;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *plugin; // @synthesize plugin=_plugin;
- (id)JSONDictionary;
- (id)initWithPlugin:(id)arg1;

@end

