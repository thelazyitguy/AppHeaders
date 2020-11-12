//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/RKValueTransformer.h>

@class NSString;

@interface RKBlockValueTransformer : RKValueTransformer
{
    NSString *_name;
    CDUnknownBlockType _validationBlock;
    CDUnknownBlockType _transformationBlock;
}

+ (id)valueTransformerWithValidationBlock:(CDUnknownBlockType)arg1 transformationBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType transformationBlock; // @synthesize transformationBlock=_transformationBlock;
@property(copy, nonatomic) CDUnknownBlockType validationBlock; // @synthesize validationBlock=_validationBlock;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (_Bool)validateTransformationFromClass:(Class)arg1 toClass:(Class)arg2;
- (_Bool)transformValue:(id)arg1 toValue:(id *)arg2 ofClass:(Class)arg3 error:(id *)arg4;

@end
