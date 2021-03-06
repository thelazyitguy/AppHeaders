//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Airship/UAEvent.h>

@class NSDecimalNumber, NSDictionary, NSMutableDictionary, NSString;

@interface UACustomEvent : UAEvent
{
    NSDecimalNumber *_eventValue;
    NSString *_eventName;
    NSString *_interactionID;
    NSString *_interactionType;
    NSString *_transactionID;
    NSMutableDictionary *_mutableProperties;
    NSString *_conversionSendID;
    NSString *_conversionPushMetadata;
    NSString *_templateType;
}

+ (id)eventWithName:(id)arg1 value:(id)arg2;
+ (id)eventWithName:(id)arg1 valueFromString:(id)arg2;
+ (id)eventWithName:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(copy, nonatomic) NSString *conversionPushMetadata; // @synthesize conversionPushMetadata=_conversionPushMetadata;
@property(copy, nonatomic) NSString *conversionSendID; // @synthesize conversionSendID=_conversionSendID;
@property(retain, nonatomic) NSMutableDictionary *mutableProperties; // @synthesize mutableProperties=_mutableProperties;
@property(copy, nonatomic) NSString *transactionID; // @synthesize transactionID=_transactionID;
@property(copy, nonatomic) NSString *interactionType; // @synthesize interactionType=_interactionType;
@property(copy, nonatomic) NSString *interactionID; // @synthesize interactionID=_interactionID;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(retain, nonatomic) NSDecimalNumber *eventValue; // @synthesize eventValue=_eventValue;
- (void)track;
@property(readonly, nonatomic) NSDictionary *payload;
- (id)data;
@property(readonly, copy, nonatomic) NSDictionary *properties;
- (void)setInteractionFromMessageCenterMessage:(id)arg1;
- (_Bool)isValid;
- (void)setStringArrayProperty:(id)arg1 forKey:(id)arg2;
- (void)setNumberProperty:(id)arg1 forKey:(id)arg2;
- (void)setStringProperty:(id)arg1 forKey:(id)arg2;
- (void)setBoolProperty:(_Bool)arg1 forKey:(id)arg2;
- (id)initWithName:(id)arg1 withValue:(id)arg2;
- (id)eventType;

@end

