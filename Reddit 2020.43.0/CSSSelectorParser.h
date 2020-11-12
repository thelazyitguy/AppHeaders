//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSInputStream, NSMutableArray, NSString;

@interface CSSSelectorParser : NSObject
{
    NSString *_string;
    CSSInputStream *_inputStream;
    unsigned long long _location;
    NSMutableArray *_selectors;
}

+ (id)parseSelector:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)parsePseudoSelector:(id *)arg1;
- (id)parseAttributeSelector:(id *)arg1;
- (id)parseSimpleSelector:(id *)arg1;
- (id)parseTypeSelector:(id *)arg1;
- (id)parseSequenceOfSimpleSelectors:(id *)arg1;
- (id)parseSelector:(id)arg1 error:(id *)arg2;
- (id)parse:(id *)arg1;
- (void)emitError:(id *)arg1 reason:(id)arg2 location:(unsigned long long)arg3;
- (void)emitError:(id *)arg1 reason:(id)arg2;
- (id)preprocessInput:(id)arg1;
- (id)initWithString:(id)arg1;

@end
