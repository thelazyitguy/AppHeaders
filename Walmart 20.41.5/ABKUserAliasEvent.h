//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Appboy_iOS_SDK/ABKEvent.h>

@class NSString;

@interface ABKUserAliasEvent : ABKEvent
{
    NSString *_alias;
    NSString *_label;
}

- (void).cxx_destruct;
@property(copy) NSString *label; // @synthesize label=_label;
@property(copy) NSString *alias; // @synthesize alias=_alias;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)getDataAsJson;
- (id)getType;
- (id)initWithAlias:(id)arg1 label:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

