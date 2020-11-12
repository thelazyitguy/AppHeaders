//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Mixpanel/NSCoding-Protocol.h>

@class NSString;

@interface MPVariantTweak : NSObject <NSCoding>
{
    NSString *_name;
    NSString *_encoding;
    id _value;
}

+ (id)tweakWithJSONObject:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *encoding; // @synthesize encoding=_encoding;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTweak:(id)arg1;
- (id)description;
- (void)stop;
- (void)execute;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 encoding:(id)arg2 value:(id)arg3;
- (id)init;

@end
