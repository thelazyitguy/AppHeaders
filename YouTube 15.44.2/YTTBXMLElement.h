//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTTBXMLElement : NSObject
{
    struct _TBXMLElement *_element;
}

+ (id)description:(struct _TBXMLElement *)arg1 indent:(unsigned long long)arg2;
- (id)description;
- (id)textForChildNamed:(id)arg1 withAttributeNamed:(id)arg2 ofValue:(id)arg3;
- (id)valueOfAttributeNamed:(id)arg1 ofChildNamed:(id)arg2 withAttributeNamed:(id)arg3 ofValue:(id)arg4;
- (id)valueOfAttributeNamed:(id)arg1 ofChildNamed:(id)arg2 ofChildNamed:(id)arg3;
- (id)valueOfAttributeNamed:(id)arg1 ofChildNamed:(id)arg2;
- (id)valueOfAttributeNamed:(id)arg1;
- (_Bool)hasAttributeNamed:(id)arg1;
- (id)textForChildNamed:(id)arg1 ofChildNamed:(id)arg2;
- (id)textForChildNamed:(id)arg1;
- (id)text;
- (id)rawText;
- (id)name;
- (void)iterateChildrenNamed:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)childEnumeratorNamed:(id)arg1;
- (void)iterateChildrenWithBlock:(CDUnknownBlockType)arg1;
- (id)childEnumerator;
- (_Bool)hasChildNamed:(id)arg1;
- (id)nextSiblingNamed:(id)arg1;
- (id)nextSibling;
- (id)firstChild;
- (id)childElementNamed:(id)arg1 withAttributeNamed:(id)arg2 ofValue:(id)arg3;
- (id)childElementNamed:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithElement:(struct _TBXMLElement *)arg1;
- (double)ml_timeIntervalValueOfAttributeNamed:(id)arg1 timeScale:(unsigned long long)arg2;

@end

