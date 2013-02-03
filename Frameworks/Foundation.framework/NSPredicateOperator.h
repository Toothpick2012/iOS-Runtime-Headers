/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPredicateOperator : NSObject <NSCoding, NSCopying> {
    NSUInteger _modifier;
    NSUInteger _operatorType;
}

+ (SEL)_getSelectorForType:(NSUInteger)arg1;
+ (id)_getSymbolForType:(NSUInteger)arg1;
+ (id)_newOperatorWithType:(NSUInteger)arg1 modifier:(NSUInteger)arg2 options:(NSUInteger)arg3;
+ (id)operatorWithCustomSelector:(SEL)arg1 modifier:(NSUInteger)arg2;
+ (id)operatorWithType:(NSUInteger)arg1 modifier:(NSUInteger)arg2 options:(NSUInteger)arg3;

- (void)_setModifier:(NSUInteger)arg1;
- (void)_setOptions:(NSUInteger)arg1;
- (void)acceptVisitor:(id)arg1 flags:(NSUInteger)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperatorType:(NSUInteger)arg1 modifier:(NSUInteger)arg2 options:(NSUInteger)arg3;
- (id)initWithOperatorType:(NSUInteger)arg1 modifier:(NSUInteger)arg2;
- (id)initWithOperatorType:(NSUInteger)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)modifier;
- (NSUInteger)operatorType;
- (NSUInteger)options;
- (BOOL)performOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (id)predicateFormat;
- (SEL)selector;
- (id)symbol;

@end