//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mixpanel/MPAbstractABTestDesignerMessage.h>

@class NSDictionary;

@interface MPDesignerTrackMessage : MPAbstractABTestDesignerMessage
{
    NSDictionary *_payload;
}

+ (id)messageWithPayload:(id)arg1;
+ (id)message;
- (void).cxx_destruct;
- (id)JSONData;
- (id)initWithType:(id)arg1 andPayload:(id)arg2;
- (id)initWithType:(id)arg1;

@end

