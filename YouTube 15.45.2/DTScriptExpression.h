//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTScriptVariable, NSArray;

@interface DTScriptExpression : NSObject
{
    NSArray *_parameters;
    NSArray *_parameterNames;
    DTScriptVariable *_receiver;
    SEL _selector;
}

+ (id)scriptExpressionWithString:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) DTScriptVariable *receiver; // @synthesize receiver=_receiver;
@property(readonly, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
- (SEL)selector;
- (void)enumerateParametersWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_parseString:(id)arg1;
- (id)description;
- (id)initWithString:(id)arg1;

@end
