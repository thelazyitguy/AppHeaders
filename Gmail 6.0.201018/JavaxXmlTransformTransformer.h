//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JavaxXmlTransformTransformer : NSObject
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)getErrorListener;
- (void)setErrorListenerWithJavaxXmlTransformErrorListener:(id)arg1;
- (id)getOutputPropertyWithNSString:(id)arg1;
- (void)setOutputPropertyWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)getOutputProperties;
- (void)setOutputPropertiesWithJavaUtilProperties:(id)arg1;
- (id)getURIResolver;
- (void)setURIResolverWithJavaxXmlTransformURIResolver:(id)arg1;
- (void)clearParameters;
- (id)getParameterWithNSString:(id)arg1;
- (void)setParameterWithNSString:(id)arg1 withId:(id)arg2;
- (void)transformWithJavaxXmlTransformSource:(id)arg1 withJavaxXmlTransformResult:(id)arg2;
- (void)reset;
- (id)init;

@end
