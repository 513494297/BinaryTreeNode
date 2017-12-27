//
//  BinaryTreeNode.h
//  aaaaa
//
//  Created by huafangT on 2017/12/27.
//  Copyright © 2017年 huafangT. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BinaryTreeNode : NSObject

@property (nonatomic, assign) NSInteger value;
@property (nonatomic, strong) BinaryTreeNode *leftNode;
@property (nonatomic, strong) BinaryTreeNode *rightNode;
//创建二叉树
+ (BinaryTreeNode *)createTreeWithValues:(NSArray *)values;
//二叉树中某个位置的节点（按层次遍历）
+ (BinaryTreeNode *)treeNodeAtIndex:(NSInteger)index inTree:(BinaryTreeNode *)rootNode;
//向二叉排序树节点添加一个节点
+ (BinaryTreeNode *)addTreeNode:(BinaryTreeNode *)treeNode value:(NSInteger)value;
//翻转二叉树
+ (BinaryTreeNode *)invertBinaryTree:(BinaryTreeNode *)rootNode;
// 非递归方式翻转
+ (BinaryTreeNode *)invertBinaryTreeNot:(BinaryTreeNode *)rootNode;
//先序遍历：先访问根，再遍历左子树，再遍历右子树。典型的递归思想。
+ (void)preOrderTraverseTree:(BinaryTreeNode *)rootNode handler:(void(^)(BinaryTreeNode *treeNode))handler;
//中序遍历:先遍历左子树，再访问根，再遍历右子树
+ (void)inOrderTraverseTree:(BinaryTreeNode *)rootNode handler:(void(^)(BinaryTreeNode *treeNode))handler;
//后序遍历:先遍历左子树，再遍历右子树，再访问根
+ (void)postOrderTraverseTree:(BinaryTreeNode *)rootNode handler:(void(^)(BinaryTreeNode *treeNode))handler;
//层次遍历（广度优先)
+ (void)levelTraverseTree:(BinaryTreeNode *)rootNode handler:(void(^)(BinaryTreeNode *treeNode))handler;
//二叉树的宽度
+ (NSInteger)widthOfTree:(BinaryTreeNode *)rootNode;
//二叉树的所有节点数
+ (NSInteger)numberOfNodesInTree:(BinaryTreeNode *)rootNode;
//二叉树某层中的节点数
+ (NSInteger)numberOfNodesOnLevel:(NSInteger)level inTree:(BinaryTreeNode *)rootNode;

//二叉树叶子节点数
+ (NSInteger)numberOfLeafsInTree:(BinaryTreeNode *)rootNode;
//二叉树最大距离（直径）
+ (NSInteger)maxDistanceOfTree:(BinaryTreeNode *)rootNode;

@end




/* 调用代码
 NSArray *arr = [NSArray arrayWithObjects:@(7),@(6),@(3),@(2),@(1),@(9),@(10),@(12),@(14),@(4),@(14), nil];
 BinaryTreeNode *tree = [BinaryTreeNode new];
 tree = [BinaryTreeNode createTreeWithValues:arr];
 
 BinaryTreeNode *tree1 = [BinaryTreeNode treeNodeAtIndex:3 inTree:tree];
 NSLog(@"%@",tree1);
 
 NSMutableArray *orderArray = [NSMutableArray array];
 [BinaryTreeNode preOrderTraverseTree:tree handler:^(BinaryTreeNode *treeNode) {
 [orderArray addObject:@(treeNode.value)];
 }];
 NSLog(@"先序遍历结果：%@", [orderArray componentsJoinedByString:@","]);
 
 NSMutableArray *orderArray1 = [NSMutableArray array];
 [BinaryTreeNode inOrderTraverseTree:tree handler:^(BinaryTreeNode *treeNode) {
 
 [orderArray1 addObject:@(treeNode.value)];
 
 }];
 NSLog(@"中序遍历结果：%@", [orderArray1 componentsJoinedByString:@","]);
 
 
 NSMutableArray *orderArray2 = [NSMutableArray array];
 [BinaryTreeNode postOrderTraverseTree:tree handler:^(BinaryTreeNode *treeNode) {
 [orderArray2 addObject:@(treeNode.value)];
 
 }];
 NSLog(@"后序遍历结果：%@", [orderArray2 componentsJoinedByString:@","]);
 
 
 NSMutableArray *orderArray3 = [NSMutableArray array];
 [BinaryTreeNode levelTraverseTree:tree handler:^(BinaryTreeNode *treeNode) {
 [orderArray3 addObject:@(treeNode.value)];
 
 }];
 NSLog(@"层次遍历结果：%@", [orderArray3 componentsJoinedByString:@","]);
 
 
 NSArray *arr = [NSArray arrayWithObjects:@(7),@(6),@(3),@(2),@(1),@(9),@(10),@(12),@(14),@(4),@(14), nil];
 BinaryTreeNode *tree = [BinaryTreeNode new];
 tree = [BinaryTreeNode createTreeWithValues:arr];
 
 BinaryTreeNode *tree1 = [BinaryTreeNode treeNodeAtIndex:3 inTree:tree];
 NSLog(@"%@",tree1);
 
 NSMutableArray *orderArray = [NSMutableArray array];
 [BinaryTreeNode preOrderTraverseTree:tree handler:^(BinaryTreeNode *treeNode) {
 [orderArray addObject:@(treeNode.value)];
 }];
 NSLog(@"先序遍历结果：%@", [orderArray componentsJoinedByString:@","]);
 
 NSMutableArray *orderArray1 = [NSMutableArray array];
 [BinaryTreeNode inOrderTraverseTree:tree handler:^(BinaryTreeNode *treeNode) {
 
 [orderArray1 addObject:@(treeNode.value)];
 
 }];
 NSLog(@"中序遍历结果：%@", [orderArray1 componentsJoinedByString:@","]);
 
 
 NSMutableArray *orderArray2 = [NSMutableArray array];
 [BinaryTreeNode postOrderTraverseTree:tree handler:^(BinaryTreeNode *treeNode) {
 [orderArray2 addObject:@(treeNode.value)];
 
 }];
 NSLog(@"后序遍历结果：%@", [orderArray2 componentsJoinedByString:@","]);
 
 
 NSMutableArray *orderArray3 = [NSMutableArray array];
 [BinaryTreeNode levelTraverseTree:tree handler:^(BinaryTreeNode *treeNode) {
 [orderArray3 addObject:@(treeNode.value)];
 
 }];
 NSLog(@"层次遍历结果：%@", [orderArray3 componentsJoinedByString:@","]);
 
 */
