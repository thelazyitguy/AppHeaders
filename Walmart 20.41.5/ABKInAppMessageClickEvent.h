//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Appboy_iOS_SDK/ABKEvent.h>

@class NSString;

@interface ABKInAppMessageClickEvent : ABKEvent
{
    NSString *_clickedInAppMessageCardId;
    NSString *_clickedInAppMessageTriggerId;
}

- (void).cxx_destruct;
@property(copy) NSString *clickedInAppMessageTriggerId; // @synthesize clickedInAppMessageTriggerId=_clickedInAppMessageTriggerId;
@property(copy) NSString *clickedInAppMessageCardId; // @synthesize clickedInAppMessageCardId=_clickedInAppMessageCardId;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)getDataAsJson;
- (id)getType;
- (id)initWithCardId:(id)arg1 triggerId:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
