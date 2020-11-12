//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VVJSONSchemaValidation/VVJSONSchemaValidator-Protocol.h>

@class NSDictionary, NSString;

@interface VVJSONSchemaDependenciesValidator : NSObject <VVJSONSchemaValidator>
{
    NSDictionary *_schemaDependencies;
    NSDictionary *_propertyDependencies;
}

+ (id)validatorWithDictionary:(id)arg1 schemaFactory:(id)arg2 error:(id *)arg3;
+ (id)assignedKeywords;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *propertyDependencies; // @synthesize propertyDependencies=_propertyDependencies;
@property(readonly, copy, nonatomic) NSDictionary *schemaDependencies; // @synthesize schemaDependencies=_schemaDependencies;
- (_Bool)validateInstance:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)subschemas;
@property(readonly, copy) NSString *description;
- (id)initWithSchemaDependencies:(id)arg1 propertyDependencies:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
