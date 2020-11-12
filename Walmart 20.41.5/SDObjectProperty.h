//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SDObjectProperty : NSObject
{
    NSString *_propertyName;
    NSString *_propertyType;
    NSString *_propertySubtype;
    SEL _propertySelector;
    NSString *_transformerClassName;
}

+ (id)propertyType:(struct objc_property *)arg1;
+ (id)propertyFromString:(id)arg1;
+ (id)propertyFromObject:(id)arg1 named:(id)arg2;
+ (id)propertyFromClass:(Class)arg1 named:(id)arg2;
+ (id)propertiesForObject:(id)arg1;
+ (id)propertiesForClass:(id)arg1;
+ (id)property;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *transformerClassName; // @synthesize transformerClassName=_transformerClassName;
@property(nonatomic) SEL propertySelector; // @synthesize propertySelector=_propertySelector;
@property(retain, nonatomic) NSString *propertySubtype; // @synthesize propertySubtype=_propertySubtype;
@property(retain, nonatomic) NSString *propertyType; // @synthesize propertyType=_propertyType;
@property(retain, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
- (Class)desiredOutputClass;
- (_Bool)isValid;
- (void)interpretPropertyString:(id)arg1;
@property(readonly, nonatomic) Class propertySubtypeClass;
@property(readonly, nonatomic) Class propertyTypeClass;
- (id)description;

@end
