//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Matrix;

@interface ATRMatrix : NSObject
{
    int _n;
    int _m;
    Matrix *_matrix;
}

+ (id)multiply:(id)arg1 secondMatrix:(id)arg2;
+ (id)subtractMatrix:(id)arg1 secondMatrix:(id)arg2;
+ (id)addMatrix:(id)arg1 secondMatrix:(id)arg2;
+ (id)getIdentityMatrix:(int)arg1;
@property(retain, nonatomic) Matrix *matrix; // @synthesize matrix=_matrix;
@property(nonatomic) int m; // @synthesize m=_m;
@property(nonatomic) int n; // @synthesize n=_n;
- (void).cxx_destruct;
- (id)inverseMatrix;
- (id)transposeMatrix;
- (void)addElement:(int)arg1 j:(int)arg2 value:(double)arg3;
- (double)getElement:(int)arg1 j:(int)arg2;
- (void)overwriteMatrix:(id)arg1;
- (id)initWithRows:(int)arg1 columns:(int)arg2;

@end
