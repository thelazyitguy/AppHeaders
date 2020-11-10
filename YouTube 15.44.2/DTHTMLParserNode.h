//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface DTHTMLParserNode : NSObject
{
    NSDictionary *_attributes;
    NSString *_name;
    DTHTMLParserNode *_parentNode;
    NSMutableArray *_childNodes;
}

- (void).cxx_destruct;
@property(nonatomic) __weak DTHTMLParserNode *parentNode; // @synthesize parentNode=_parentNode;
@property(copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *childNodes; // @synthesize childNodes=_childNodes;
- (id)text;
- (id)debugDescription;
- (void)_appendHTMLToString:(id)arg1 indentLevel:(unsigned long long)arg2;
- (id)description;
- (void)removeAllChildNodes;
- (void)removeChildNode:(id)arg1;
- (void)addChildNode:(id)arg1;
- (id)initWithName:(id)arg1 attributes:(id)arg2;

@end

