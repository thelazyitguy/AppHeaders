//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSSecureCoding-Protocol.h>

@class GRWMessageAction, NSDictionary, NSString, UIColor;

@interface GRWMessageTooltipUI : NSObject <NSSecureCoding>
{
    NSString *_elementName;
    UIColor *_backgroundColor;
    UIColor *_textColor;
    NSString *_headline;
    NSString *_body;
    GRWMessageAction *_action;
    NSDictionary *_schemes;
    long long _placement;
}

+ (id)stringForPlacement:(long long)arg1;
+ (_Bool)supportsSecureCoding;
+ (long long)placementFromProto:(int)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long placement; // @synthesize placement=_placement;
@property(readonly, nonatomic) NSDictionary *schemes; // @synthesize schemes=_schemes;
@property(readonly, nonatomic) GRWMessageAction *action; // @synthesize action=_action;
@property(readonly, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) NSString *elementName; // @synthesize elementName=_elementName;
- (id)placementAsString;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTooltipUI:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isValid;
- (id)initWithElementName:(id)arg1 headline:(id)arg2 body:(id)arg3 schemes:(id)arg4 action:(id)arg5 placement:(long long)arg6;
- (id)initWithElementName:(id)arg1 headline:(id)arg2 body:(id)arg3 backgroundColor:(id)arg4 textColor:(id)arg5 action:(id)arg6 placement:(long long)arg7;
- (id)initWithProto:(id)arg1;

@end

