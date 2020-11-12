//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ServiceCore/NSCopying-Protocol.h>
#import <ServiceCore/NSSecureCoding-Protocol.h>
#import <ServiceCore/SFCActionValue-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SFCInput : NSObject <NSSecureCoding, NSCopying, SFCActionValue>
{
    NSMutableDictionary *__storage;
}

+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (_Bool)dynamicImplementationForProperty:(id)arg1 storageKey:(id)arg2 attributes:(id)arg3 getterImplementation:(CDUnknownFunctionPointerType *)arg4 setterImplementation:(CDUnknownFunctionPointerType *)arg5;
+ (id)storageKeyForPropertyName:(id)arg1;
+ (_Bool)allowsCustomAttributes;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToInput:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)actionValue;
- (id)keysToOmitFromDescription;
- (id)storage;
- (id)JSONDictionary;
- (id)jsonValue;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
